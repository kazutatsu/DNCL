using namespace std;
// 変数型
#define 整数 int
#define 実数 double
#define 文字 char
#define 文字列 string
#define 配列 vector<int>

// 表示文
#define する cout <<
#define と <<
#define を表示 << endl;

// 代入文
#define ＜－ =

// 演算
// 比較演算
#define ＝ ==
#define ＞ >
#define ＜ <
// 論理演算
#define かつ &&
#define または ||
#define でない !

// 制御文
// 条件分岐
#define もし if(
#define ならば ){
#define を実行し，そうでなければ }else{
#define を実行し，そうでなくもし }else if(
#define を実行する }
// 条件繰り返し分
// 前判定
#define この while(
#define の間 ){
#define を繰り返す }
// 後判定
#define 繰り返し {
#define これを }while(
#define になるまで実行する )
// 順次繰り返し分
#define 変数の for(
#define を初期値 =
#define から ; 
#define までの間 ;
#define を1ずつ増やしながら ++){
#define を1ずつ減らしながら --){
#define を繰り返す }

// 定義済みの関数
int 外部からの入力(){
  int n;
  cin >> n;
  return n;
}
int 二乗(int num){
    return num * num;
}

// 新しい関数の定義
#define を {
#define 整数を返す関数 int
#define 関数 int
#define 表示する関数 void
#define と定義する }
#define の要素数 size();
#define 返す return
