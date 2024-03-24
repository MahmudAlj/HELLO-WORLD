#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <vector>
#include <cctype>

//hatalar
//birden fazla kelıme girince (bosluk) fazla karakter giriyo onun yerıne (rastgle)

class first{
private:
std::string word = "HELLO WORLD";
char harfler[26];
char harf = 'a';
int satir;
int sutun;
char print[30][30];
int dur;
int size_user;
int size_base;
std::vector<int> bosluklar;

public:
first(){
    std::srand(std::time(0));
     for (int i = 0; i < 6; i++){ // satir 
        // rastgele harfler
        for (int j = 0; j < 11; j++) { // sutun
            // duzgun harfler
            if (j == 5) {
                std::cout << " ";
                continue; 
            }
            if (i < 5) {
                print[i][j] = 'a' + std::rand() % 26;
                std::cout << print[i][j] << " ";
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
            }
            else{
                std::cout << word[j] << " ";
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
            }
        }
        std::cout << std::endl;  
    }
}


first(int durn){
    std::string text = "hello world i am gay";
    std::string temp = " ";

    for (char ch : text) {
        for (char i : "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") {
            if (i == ch || ch == temp[0]) {
                std::this_thread::sleep_for(std::chrono::milliseconds(50));
                std::cout << temp + i << std::endl;
                temp += ch;
                break;
            } else {
                std::this_thread::sleep_for(std::chrono::milliseconds(50));
                std::cout << temp + i << std::endl;
            }
        }
    }
}
std::string user_word;
void take(){ // veri alma
    std::cout << "Bunun gibi bir ";
    std::cout <<"Animasyonunu yapmak istedigniz cumleyi veya kelimeyi giriniz !" << std::endl;
    std::getline(std::cin,user_word); // kullanıcıdan gırıs alma

    std::cout << "satir sayisini giriniz !" <<  std::endl;
    std::cin >> satir; // satir bilgisi alma
    std::cout << std::endl;

    }
void calculation(){ // size hesaplama 
    size_user = user_word.length();
    size_base = word.length();
  
     for(int i = 0; i < size_user; i++){
        if(user_word[i] == ' '){
            bosluklar.push_back(i);
           // size_user--;
        }
    }
   sutun = size_user;
}

  void wordwrite() {
    std::srand(std::time(0));                                                                                   

    for (int i = 0; i < satir; i++){ // satir  rastgele karakterler
        for (int j = 0; j < sutun; j++) { // sutun duzgun karakterler
            for (int i = 0; i < bosluklar.size(); i++) { // space
                dur = bosluklar[i];
                if (j == dur) {
                    std::cout << " ";
                    continue; 
                }
            }
            if (i < satir - 1) {
                print[i][j] = 'a' + std::rand() % 26;
                std::cout << print[i][j] << " ";
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
            }
            else{
                std::cout << user_word[j] << " ";
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
            }
        }
        std::cout << std::endl;  
    }
}
  
};


int main(){

first finish;
finish.take();
finish.calculation();
finish.wordwrite();
first start(1);
    return 0;
}