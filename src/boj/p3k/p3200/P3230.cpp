#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;



int main() {
    int N, M;
    cin >> N >> M;
    std::list<int> firstList, secondList;

    for (int i = 1; i <= N; ++i) {
        int cur;
        cin >> cur;
        if (firstList.empty() || cur == 1) {
            firstList.push_front(i);
            continue;
        }

        if (cur - 1 == firstList.size()) {
            firstList.push_back(i);
            continue;
        }

        std::list<int>::iterator it = firstList.begin();
        
        std:: advance(it, cur - 2);
        firstList.insert(std::next(it), i);



    }



    std::list<int>::iterator ii = firstList.begin();
    std::advance(ii, M - 1);
   
    for (; ii != firstList.begin(); --ii) {
  
        int cur;
        cin >> cur;
        if (secondList.empty() || cur == 1) {
            secondList.push_front(*ii);

            continue;
        }

        if (cur - 1 == secondList.size()) {
            secondList.push_back(*ii);

            continue;
        }

        std::list<int>::iterator it = secondList.begin();

        std::advance(it, cur - 2);

        secondList.insert(std::next(it), *ii);

    }


    int cur;
    cin >> cur;
    if (secondList.empty() || cur == 1) {
        secondList.push_front(*ii);
    }

    else if (cur - 1 == secondList.size()) {
        secondList.push_back(*ii);
    }
    else {

        std::list<int>::iterator it = secondList.begin();
        std::advance(it, cur - 2);
        secondList.insert(std::next(it), *ii);

    }


    int cnt = 0;
    for (std::list<int>::iterator it3 = secondList.begin(); it3 != secondList.end() && cnt < 3; ++it3) {
        cout << *it3 << "\n";
        cnt++;
    }
    return 0;
}
