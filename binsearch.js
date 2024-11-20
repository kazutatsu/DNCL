data = [3,18,29,33,48,52,62,77,89,97];
kazu = data.length;
atai = Number(prompt("0~99の数字をを入力してください"));
hidari = 0;migi = kazu - 1;
owari = 0;
while(hidari <= migi && owari == 0){
  aida = Math.floor((hidari+migi)/2);
  if(data[aida] == atai){
    document.write(atai + 'は' + aida + '番目にありました','<br>');
    owari = 1;
  } else if(data[aida] < atai){
    hidari = aida + 1;
  } else {
    migi = aida - 1;
  }
}
if(owari == 0){
  document.write(atai + 'は見つかりませんでした','<br>');
}
document.write('添字',' ','要素','<br>');
for(i=0;i<kazu;i++){
  document.write(i,'  ',data[i],'<br>');
}