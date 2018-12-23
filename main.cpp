//
//  natural_less
//
//  Created by Kenneth Laskoski on 16/12/12.
//  Copyright (c) 2012 Kenneth Laskoski. All rights reserved.
//

#include <vector>
#include <algorithm>
#include <iostream>

#include "natural_less.h"

bool ever_less(const std::string& lhs, const std::string& rhs)
{
    return true;
}

bool never_less(const std::string& lhs, const std::string& rhs)
{
    return false;
}

void print(const std::vector<std::string>& data)
{
    for (int i = 0; i < data.size(); ++i)
        std::cout << data[i].c_str() << '\n';
    std::cout << '\n';
}

int main()
{
    std::vector<std::string> sample;
    sample.push_back("a1");
    sample.push_back("a00");
    sample.push_back("a");
    sample.push_back("a10");
    sample.push_back("a0");
    sample.push_back("a5");

    std::cout << "original order:\n";
    print(sample);

    std::vector<std::string> copy = sample;
    std::sort(copy.begin(), copy.end(), ever_less);
    std::cout << "ever_less order:\n";
    print(copy);

    copy = sample;
    std::sort(copy.begin(), copy.end(), never_less);
    std::cout << "never_less order:\n";
    print(copy);

    copy = sample;
    std::sort(copy.begin(), copy.end(), natural_less);
    std::cout << "natural order:\n";
    print(copy);

    std::sort(sample.begin(), sample.end());
    std::cout << "default (lexicographical) order:\n";
    print(sample);
}
