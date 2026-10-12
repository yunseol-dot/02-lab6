//1의 본인이름학번의 네임스페이스 안에 클래스2를 정의하고 멤버함수들도 모두 인라인으로 구현합니다. 

//private 멤버변수 선언: student.h 객체, 그 외 멤버변수 1개 이상

//public 멤버함수 인라인으로 정의

//-생성자: 모든 멤버변수 초기화, 기본값 설정

//-print: 표준스트림출력으로 멤버변수들 출력

//-클래스1형 객체의 접근함수를 참조형식으로 구현

#pragma once
#include "dayOfYear.h"
#include <string>

namespace yunseol2649038
{
    class holiday
    {
       //private:
        std::string name;
        dayOfYear date;
        bool parkingEnforcement;

        public:
        holiday(const std::string& n ="no name yet", dayOfYear d = dayOfYear{1,1}, bool p = false)
         : name{n}, date{d}, parkingEnforcement{p}

         {}

         void print() const
         {
            std::cout << name <<": ";
            date.print();
            if(parkingEnforcement)
                std::cout << " parking laws will be enforced\n";
            else
            std::cout << " parking laws will not be enforced\n";
            }
            friend std::ostream& operator <<(std::ostream& os, const holiday& h){
                os << h.name << ": ";
                os << h.date;
                if(h.parkingEnforcement)
                 os << " parking laws will be enforced\n";
                else
                os << " parking laws will not be enforced\n";
            
                return os;
            }

            friend std::istream& operator >>(std::istream& is, holiday& h)
            {
                std::cout << "enter holidy name: ";
                std::getline <<(is >> std::ws, h.name);
                is >> h.date;
                std::cout << "enter parking law enforcement: 1 or 0";
                is >>h.parkingEnforcement; 
            }

         void input(){
            std::cout << "holiday name:";
            std::getline(std::cin, name);
            date.input();
            std::cout << "Enter parking law enforcement: (1(true) or 0(false))";
         }

         const std::string& getName() const{return name;}
         void setName(const std::string& n) {name = n;}
         const dayOfYear& getDate() const{return date;}
         void setDate(const dayOfYear &d) {date = d;}
         void setParkingenforcement(bool p){parkingenforcement = p;}
         };

    }
    
