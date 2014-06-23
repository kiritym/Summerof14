#include<iostream>
#include<string>


using namespace std;

std::string concat(std::string str, int i);
std::string decentNumber(int number){
//    std::string threes("3");
  //  std::string fives("5");
    std::string dnum = "";
    for(int j = number; j > 0; j = j-5)
    {
        if(j%3 == 0)
        {
             dnum = concat("5", j) + concat("3", number-j);
             break;
        }
        if(number%5 == 0)
        {
             dnum = concat("3", number);
        }
        else
        {
            dnum = "-1";
        }
    }
return dnum;
}

std::string concat(std::string str, int i){
    std::string s;
    if(i == 0)
        s = "";
    else{
        s = str;
        for(int j = 2; j <= i; j++)
        {
            s += str;
        }
    }
    return s;
}
int main(){
    int lines;
    std::cin>>lines;
    int num[lines-1];
    for(int j = 0; j < lines; ++j){
        std::cin>>num[j];   
    }
    for(int k = 0; k < lines; ++k){
        std::cout<<decentNumber(num[k])<<std::endl;
    }

}

