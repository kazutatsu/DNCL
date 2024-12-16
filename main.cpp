#include <bits/stdc++.h>
#include "print.hpp"
#include "logical.hpp"
#include "if.hpp"
#include "while.hpp"
#include "for.hpp"
#include "defined.hpp"
#include "definition.hpp"
#include "other.hpp"
using namespace std;

整数を返す関数 階乗(整数 num)を
    もし num ＝ 0 ならば
        返す 1;
    を実行し，そうでなければ
        返す num * 階乗(num - 1);
    を実行する
を実行する

表示する関数 和を表示する(整数 n)を
  整数 wa = 0;
  変数の 整数 i を初期値 0 から i < n までの間 i を1ずつ増やしながら
    wa = wa + i;
  を繰り返す
  する wa を表示
を実行する  


int main() {
    する  階乗(5) を表示
    整数 x = 5, y = 10;
    する"(" と x と "," と y と ")" を表示
    cout << でない(1 < 2) << endl;
    もし x ＝ 3 ならば
      x = x+1;
    を実行し，そうでなくもし y > 2 ならば
      y = y-1;
    を実行する
    する "(" と x と "," と y と ")" を表示
    変数の 整数 i を初期値 0 から i < 10 までの間 i を1ずつ増やしながら
      する 乱数(30, 50) を表示
    を繰り返す
    //する べき乗(2, 3) を表示
    //する 二乗(3) を表示
    する 奇数(6) を表示
    二進で表示する(32);
    return 0;
}