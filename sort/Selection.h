#ifndef _SELECTION_H_
#define _SELECTION_H_

#include "SortBase.h"

class SelectionSort : public SortBase
{
public:
    SelectionSort() {}

    SelectionSort(int argc, char *argv[])
        : SortBase(argc, argv)
    {
    }

    const std::string getName() { return "Selection Sort"; }

    void doSort()
    {
        for (decltype(v.size()) i = 0; i < v.size() - 1; i++)
        {
            auto pos = i;

            for (auto j = i + 1; j < v.size(); j++)
            {
                if (v[j] < v[pos])
                    pos = j;
            }

            std::swap(v[i], v[pos]);
        }
    }
};

#endif // _SELECTION_H_

