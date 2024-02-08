#include "PmergeMe.hpp"
//184

int PmergeMe::a = 1;
int PmergeMe::b = 1;

PmergeMe::PmergeMe() {

}

PmergeMe::PmergeMe(const PmergeMe& obj) {
	*this = obj;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& obj) {
	(void)obj;
	return *this;
}

PmergeMe::~PmergeMe() {
}

int isNumber(std::string str)
{
	for (size_t j = 0; j < str.length(); j++)
	{
		if (!isdigit(str[j]))
			return (1);
	}
	return (0);
}

void printError(std::string str) {
	std::cout << str << std::endl;
	std::exit(1);
}

//*****************************Vector************************************

void PmergeMe::makePairVector() {
	size_t i = 0;
	while (i < vec.size() - 1)
	{
		if (vec[i] < vec[i + 1])
		{
			p.push_back(std::make_pair(vec[i + 1], vec[i]));
			i += 2;
		}
		else
		{
			p.push_back(std::make_pair(vec[i], vec[i + 1]));
			i += 2;
		}
	}
}

void PmergeMe::merge(size_t b, size_t m, size_t e) {
	std::vector< std::pair< int, int> > left;
	std::vector< std::pair< int, int> > right;
	for (size_t i = b; i <= m; i++)
		left.push_back(std::make_pair(p[i].first, p[i].second));
	for (size_t i = m + 1; i <= e; i++)
		right.push_back(std::make_pair(p[i].first, p[i].second));
	size_t i, j, k;
	size_t nl = left.size();
	size_t nr = right.size();
	i = j = 0;
	k = b;
	while (i < nl && j < nr)
	{
		if (left[i].first <= right[j].first)
		{
			p[k].first = left[i].first;
			p[k].second = left[i].second;
			i++;
		}
		else
		{
			p[k].first = right[j].first;
			p[k].second = right[j].second;
			j++;
		}
		k++;
	}
	while (i < nl)
	{
		p[k].first = left[i].first;
		p[k].second = left[i].second;
		i++;
		k++;
	}
	while (j < nr)
	{
		p[k].first = right[j].first;
		p[k].second = right[j].second;
		j++;
		k++;
	}
}

void PmergeMe::merge_sort(size_t b, size_t e) {
	if (b >= e)
		return;
	size_t	mid = (b + e) / 2;
	merge_sort(b, mid);
	merge_sort(mid + 1, e);
	merge(b, mid, e);
}

void PmergeMe::createMainPend() {
	for (size_t i = 0; i < p.size(); i++)
	{
		if (i == 0)
		{
			main.push_back(p[i].second);
			main.push_back(p[i].first);
			pend.push_back(p[i].second);
		}
		else
		{
			main.push_back(p[i].first);
			pend.push_back(p[i].second);
		}
	}
}

size_t PmergeMe::JacobsthalNbr()
{
	size_t c;
	c = a + 2 * b;
	b = a;
	a = c;
	return c;
}

void PmergeMe::fordJohnsonAlg() {
	size_t last = 1;
	size_t i = 1;
	size_t current = 1;
	while(current < pend.size())
	{
		current = JacobsthalNbr();
		if (current > pend.size())
			current = pend.size();
		i = current;
		int size = i + last - 1;
		while (i > last)
		{
			std::vector<int>::iterator lower;
			lower = std::lower_bound(main.begin(), main.begin() + size, pend[i - 1]);
			main.insert(lower, pend[i - 1]);
			i--;
		}
		last = current;
	}
}

void PmergeMe::implementationWithVector() {
	if (vec.size() > 1)
	{
		if (vec.size() % 2 != 0)
		{
			tmp = vec[vec.size() - 1];
			vec.pop_back();
		}
		else
			tmp = -1;
		makePairVector();
		merge_sort(0, p.size() - 1);
		createMainPend();
		if (tmp != -1)
			pend.push_back(tmp);
		fordJohnsonAlg();
	}
}

//******************************Deque******************************************

void PmergeMe::makePairDeque() {
	size_t i = 0;
	while (i < deq.size() - 1)
	{
		if (deq[i] < deq[i + 1])
		{
			p_d.push_back(std::make_pair(deq[i + 1], deq[i]));
			i += 2;
		}
		else
		{
			p_d.push_back(std::make_pair(deq[i], deq[i + 1]));
			i += 2;
		}
	}
}

void PmergeMe::mergeDeque(size_t b, size_t m, size_t e) {
	std::deque< std::pair< int, int> > left;
	std::deque< std::pair< int, int> > right;
	for (size_t i = b; i <= m; i++)
		left.push_back(std::make_pair(p_d[i].first, p_d[i].second));
	for (size_t i = m + 1; i <= e; i++)
		right.push_back(std::make_pair(p_d[i].first, p_d[i].second));
	size_t i, j, k;
	size_t nl = left.size();
	size_t nr = right.size();
	i = j = 0;
	k = b;
	while (i < nl && j < nr)
	{
		if (left[i].first <= right[j].first)
		{
			p_d[k].first = left[i].first;
			p_d[k].second = left[i].second;
			i++;
		}
		else
		{
			p_d[k].first = right[j].first;
			p_d[k].second = right[j].second;
			j++;
		}
		k++;
	}
	while (i < nl)
	{
		p_d[k].first = left[i].first;
		p_d[k].second = left[i].second;
		i++;
		k++;
	}
	while (j < nr)
	{
		p_d[k].first = right[j].first;
		p_d[k].second = right[j].second;
		j++;
		k++;
	}
}

void PmergeMe::merge_sortDeque(size_t b, size_t e) {
	if (b >= e)
		return;
	size_t	mid = (b + e) / 2;
	merge_sort(b, mid);
	merge_sort(mid + 1, e);
	merge(b, mid, e);
}

void PmergeMe::createMainPendDeque() {
	for (size_t i = 0; i < p_d.size(); i++)
	{
		if (i == 0)
		{
			main_d.push_back(p_d[i].second);
			main_d.push_back(p_d[i].first);
			pend_d.push_back(p_d[i].second);
		}
		else
		{
			main_d.push_back(p_d[i].first);
			pend_d.push_back(p_d[i].second);
		}
	}
}

void PmergeMe::fordJohnsonAlgDeque() {
	size_t last = 1;
	size_t i = 1;
	size_t current = 1;
	while(current < pend_d.size())
	{
		current = JacobsthalNbr();
		if (current > pend_d.size())
			current = pend_d.size();
		i = current;
		int size = i + last - 1;
		while (i > last)
		{
			std::deque<int>::iterator lower;
			lower = std::lower_bound(main_d.begin(), main_d.begin() + size, pend_d[i - 1]);
			main_d.insert(lower, pend_d[i - 1]);
			i--;
		}
		last = current;
	}
}

void PmergeMe::implementationWithDeque() {
	if (deq.size() > 1)
	{
		if (deq.size() % 2 != 0)
		{
			d = deq[deq.size() - 1];
			deq.pop_back();
		}
		else
			d = -1;
		makePairDeque();
		merge_sortDeque(0, p_d.size() - 1);
		createMainPendDeque();
		if (d != -1)
			pend_d.push_back(d);
		fordJohnsonAlgDeque();
	}
}

//************************************************************************

PmergeMe::PmergeMe(char* av[]){
	int i = 1;
	clock_t tv;
	tv = clock();
	clock_t td;
	td = clock();
	while(av[i])
	{
		std::string str = av[i];
		if (isNumber(str))
			printError("Error this argement isn't integer");
		std::stringstream ss(str);
		long nbr;
		ss >> nbr;
		if (nbr > INT_MAX || nbr < INT_MIN)
			printError("Error this argement isn't integer");
		this->vec.push_back(nbr);
		this->deq.push_back(nbr);
		i++;
	}
	std::cout << "Before: ";
	for (size_t i = 0; i < vec.size(); i++)
		std::cout << vec[i] << " ";
	std::cout << std::endl;
	implementationWithVector();
	
	a = 1;
	b = 1;

	implementationWithDeque();

	if (main.size() == 0)
	{
		std::cout << "After:  ";
		for (size_t i = 0; i < vec.size(); i++)
			std::cout << vec[i] << " ";
		std::cout << std::endl;
		std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " <<
			(float)(clock() - tv)/(CLOCKS_PER_SEC) * 1e6 << " us" << std::endl;
		std::cout << "Time to process a range of " << deq.size() << " elements with std::deque : " <<
			(float)(clock() - td)/(CLOCKS_PER_SEC) * 1e6 << " us" << std::endl;
	}
	else
	{
		std::cout << "After:  ";
		for (size_t i = 0; i < main.size(); i++)
			std::cout << main[i] << " ";
		std::cout << std::endl;
		std::cout << "Time to process a range of " << main.size() << " elements with std::vector : " <<
			(float)(clock() - tv)/(CLOCKS_PER_SEC) * 1e6 << " us" << std::endl;
		std::cout << "Time to process a range of " << main_d.size() << " elements with std::deque : " <<
			(float)(clock() - td)/(CLOCKS_PER_SEC) * 1e6 << " us" << std::endl;
	}
}
