// 定義済みの関数
#include <random>
using namespace std;

int 外部からの入力(){
  int n;
  cin >> n;
  return n;
}

int 乱数(int min, int max){
  int dis = max - min;
  int r;
  int tmp;
  do{
    r = rand();
    r = r % dis + min;
  } while(r < min || r > max);
  return r;
}
#define べき乗 pow

int 二乗(int num){
    return num * num;
}

bool 奇数(int num){
    return num % 2;
}

void 二進で表示する(int n){
  string s = "";
  while(n > 0){
    s = to_string(n % 2) + s;
    n /= 2;
  }
  cout << s << endl;
}

