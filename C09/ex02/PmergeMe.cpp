#include "PmergeMe.hpp"
//184
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

void makePairVector(std::vector< std::pair< int, int> > &p, std::vector<int> vec) {
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

void merge_(std::vector<std::pair<int, int> >& p, size_t b, size_t m, size_t e) {
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
			i = i + 1;
		}
		else
		{
			p[k].first = right[j].first;
			p[k].second = right[j].second;
			j = j + 1;
		}
		k = k + 1;
	}
	while (i < nl)
	{
		p[k].first = left[i].first;
		p[k].second = left[i].second;
		i = i + 1;
		k = k + 1;
	}
	while (j < nr)
	{
		p[k].first = right[j].first;
		p[k].second = right[j].second;
		j = j + 1;
		k = k + 1;
	}
}

void merge_sort(std::vector<std::pair<int, int> >& p, size_t b, size_t e) {
	if (b >= e)
		return;
	size_t	mid = (b + e) / 2;
	merge_sort(p, b, mid);
	merge_sort(p, mid + 1, e);
	merge_(p, b, mid, e);
}

void createMainPend(std::vector< std::pair< int, int> > p, std::vector<int> &main, std::vector<int> &pend) {
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

void Jacobsthal(std::vector<int> &joh, int size)
{
	for (int i = 0; i < size; i++)
	{
		joh.push_back((std::pow(2, i + 2) - std::pow(-1, i + 2)) / 3);
	}
}

void fordJohnsonAlg(std::vector<int> &main, std::vector<int> &pend, std::vector<int> joh) {
	std::vector<int>::iterator lol;
	int j = 1;
	for (size_t i = 1; i < pend.size(); i++)
	{
		std::vector<int>::iterator it;
		it = std::find(joh.begin(), joh.end(), i + 1);
		if (it != joh.end())
		{
			j = *it;
			lol = it;
			--it;
			int last = *it;
			int size = j + last - 1;
			for (int k = 0; k <= size; k++)
			{
				if (pend[i] <= main[k])
				{
					main.insert(main.begin() + k, pend[i]);
					break ;
				}
			}
			int p = j - 1;
			while (p > last)
			{
				p--;
				for (int k = 0; k <= size; k++)
				{
					if (pend[p] <= main[k])
					{
						main.insert(main.begin() + k, pend[p]);
						break ;
					}
				}
			}
		}
	}
	lol++;
	if ((size_t)(*lol) > pend.size())
	{
		size_t size = j + pend.size() - 1;
		size_t p = j;
		while (p < pend.size())
		{
			for (size_t k = 0; k < size; k++)
			{
				if (pend[p] <= main[k])
				{
					main.insert(main.begin() + k, pend[p]);
					break ;
				}
				if (k + 1 == main.size())
				{
					main.insert(main.end(), pend[p]);
					break ;
				}
			}
			p++;
		}
	}
}

PmergeMe::PmergeMe(char* av[]){
	int i = 1;
	clock_t t;
	t = clock();
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
		i++;
	}

	std::cout << "Before: ";
	for (size_t i = 0; i < vec.size(); i++)
		std::cout << vec[i] << " ";
	std::cout << std::endl;

	if (vec.size() > 1)
	{
		if (vec.size() % 2 != 0)
		{
			tmp = vec[vec.size() - 1];
			vec.pop_back();
		}
		else
			tmp = -1;
		makePairVector(this->p, this->vec);
		merge_sort(this->p, 0, p.size() - 1);
		createMainPend(this->p, this->main, this->pend);
		if (tmp != -1)
			pend.push_back(tmp);
		Jacobsthal(joh, pend.size());
		fordJohnsonAlg(this->main, this->pend, this->joh);
	}
	if (vec.size() > 1)
	{
		std::cout << "After:  ";
		for (size_t i = 0; i < main.size(); i++)
			std::cout << main[i] << " ";
		std::cout << std::endl;
		std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " <<
			(float)(clock() - t)/(CLOCKS_PER_SEC) * 1e6 << std::endl;
		if (std::is_sorted(main.begin(), main.end()))
			std::cout << "--> IS SORTED\n";
		else
			std::cout << "--> NOT SORTED\n";
	}
	else{
		std::cout << "After:  ";
		for (size_t i = 0; i < vec.size(); i++)
			std::cout << vec[i] << " ";
		std::cout << std::endl;
		std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " <<
			(float)(clock() - t)/(CLOCKS_PER_SEC) * 1e6 << std::endl;
		if (std::is_sorted(vec.begin(), vec.end()))
			std::cout << "--> IS SORTED\n";
		else
			std::cout << "--> NOT SORTED\n";
	}
}
