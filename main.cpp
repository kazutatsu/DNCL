#include <bits/stdc++.h>
using namespace std;

#define 関数 int
#define 整数 int
#define する cout <<
#define と <<
#define を表示 << endl;
#define ＜－ =
#define を1増やす ++;
#define を1減らす --;
#define かつ &&
#define または ||
#define でない !
#define は {
#define もし if(
#define ならば ){
#define を実行し，そうでなければ }else{
#define を実行し，そうでなくもし }else if(
#define を実行する }
#define 返す return
#define ＝ ==
#define この while(
#define の間 ){
#define を繰り返す }
#define 繰り返し {
#define を }while(
#define になるまで実行する )

関数 階乗(整数 num)は
    もし num ＝ 0 ならば
        返す 1;
    を実行し，そうでなければ
        返す num * 階乗(num - 1);
    を実行する
を実行する

int main() {
    する  階乗(5) を表示
    整数 x ＜－ 5, y ＜－ 10;
    する"(" と x と "," と y と ")" を表示
    cout << でない(1 < 2) << endl;
    もし x ＝ 3 ならば
      x ＜－ x+1;
    を実行し，そうでなくもし y > 2 ならば
      y ＜－ y-1;
    を実行する
    cout << "(" << x << "," << y << ")" << endl;
    return 0;
}