#include "holiday.h"
#include <array>
namespace yunseol2649038
{
    void printHolidayArray(const holiday[a], const int n){
        for(int i=0; i<n; ++i)
        std::cout << a[i];
    std::cout << std::endl;
        }
    }
}



int main(){

    const int n{4};

    using namespace yunseol2649038;

    holiday a[n];
    a[0]=holiday{"Christmas", dayOfYear{12,25}, false};
    a[0].print();
    a[1].setName("newyear day"); a[1].setDate(dayOfYear{1,1}); a[1].setParkingenforcement(false);
    a[2].input(); a[2].print();
    std::cin >> a[3];
    printHolidayArray(a,n);

    for(int i =0; i < arr.size() ; ++i)
    arr[i] = a[i];


    return 0;
}