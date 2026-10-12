//1의 본인이름학번의 네임스페이스 안에 클래스2를 정의하고 멤버함수들도 모두 인라인으로 구현합니다. 

//private 멤버변수 선언: student.h 객체, 그 외 멤버변수 1개 이상

//public 멤버함수 인라인으로 정의

//-생성자: 모든 멤버변수 초기화, 기본값 설정

//-print: 표준스트림출력으로 멤버변수들 출력

//-클래스1형 객체의 접근함수를 참조형식으로 구현

#pragma once
#include "dayOfYear.h"

namespace yunseol2649038
{
    class holiday
    {
       //private:
        dayOfYear date;
        bool parkingEnforcement;

        public:
        holiday(dayOfYear d = dayOfYear{1,1}, bool p = false)
         : date{d}, parkingEnforcement{p}

         {}

         void print() const
         {
            date.print();

        if(parkingEnforcement)
            std::cout << " parking laws will be enforced\n";
        else
         std::cout << " parking laws will not be enforced\n";
         }

         const dayOfYear& getDate() const{return date;}
         void setDate(const dayOfYear &d) {date = d;}
         };

    }
    
