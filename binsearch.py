data = [3,18,29,33,48,52,62,77,89,97]
kazu = len(data)
atai = int(input("0～99の数字を入力してください\n"))
hidari = 0; migi = kazu - 1
owari = 0
while hidari <= migi and owari == 0:
  aida = (hidari + migi) // 2
  if data[aida] == atai:
    print(atai, "は", aida, "番目にありました")
    owari = 1
  elif data[aida] < atai:
    hidari = aida + 1
  else:
    migi = aida - 1
if owari == 0:
  print(atai, "は見つかりませんでした")
print('添字',' ','要素')
for i in range(kazu):
  print(i,'    ',data[i])