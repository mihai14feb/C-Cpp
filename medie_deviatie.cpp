#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <ranges>
#include <random>
using namespace std;

int main()
{
    auto engine = mt19937{random_device{}()};
    uniform_int_distribution uniform{0,99};
    auto randint = [&uniform, &engine](){return uniform(engine);};
    auto v = vector<int>(100000);
    ranges::generate(v, randint);
    auto s = transform_reduce(v.begin(), v.end(), 0.0, plus<>(), [](int x){return static_cast<double>(x);});
    auto medie = s/100000;
    cout << "Media: " << medie << endl;
    auto sp = transform_reduce(v.begin(), v.end(), 0.0, plus<>(), [medie](int x)
    {
        double dif = static_cast<double>(x)-medie;
        return dif*dif;
    });
    auto dev = sqrt(sp/100000);
    cout << "Deviatia: " << dev;
}
