# An example for break
list = [5, 6, 7, 8, 9]
for word in list:
  if word == 8:
    print("Break encountered")
    break
  print(word)

list = [5, 6, 7, 8, 9]
for word in list:
  if word == 8:
    print("Skipping the 8")
    continue
  print(word)
