#include <bits/stdc++.h>
#include "print.hpp"
#include "logical.hpp"
#include "if.hpp"
#include "while.hpp"
#include "for.hpp"
using namespace std;

#define 関数 int
#define 整数 int
#define は {
#define ＜－ =
#define を1増やす ++;
#define を1減らす --;
#define 返す return
#define を ;



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
    変数 整数 i を初期値 0 から i < 10 までの間 i を1ずつ増やしながら
        する i を表示
    を繰り返す
    return 0;
}