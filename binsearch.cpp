#include <bits/stdc++.h>
#include "dncl.hpp"
using namespace std;

関数 main()を
  配列 Data = {3,18,29,33,48,52,63,77,89,97};
  整数 kazu = Data.の要素数
  する "0～99の数字を入力してください" を表示
  整数 atai = 外部からの入力();
  整数 hidari = 0, migi = kazu - 1;
  整数 owari = 0;
  この hidari <= migi かつ owari == 0 の間
    整数 aida = (hidari+migi)/2;
    もし Data[aida] == atai ならば
      する atai と "は" と aida と "番目にありました" を表示
      owari = 1;
    を実行し，そうでなくもし Data[aida] < atai ならば
      hidari = aida + 1;
    を実行し，そうでなければ
      migi = aida - 1;
    を実行する
  を繰り返す
  もし owari == 0 ならば
    する atai と "は見つかりませんでした" を表示
  を実行する
  する "添字" と ' ' と "要素" を表示
  変数の 整数 i を初期値 0 から i < kazu までの間 i を1ずつ増やしながら
    する i と "    " と Data[i] を表示
  を繰り返す
を実行する