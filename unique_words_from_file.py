import re
dictionary = dict()
def uniqueWord(Word):
    if Word in dictionary:
        dictionary[words] += 1

    else:
        dictionary.update({words: 1})


c=open("c.txt",'w')
with open ('b.txt') as f:
    for i in f:
        word1=re.split("[\W]+",i)

for words in word1:
    uniqueWord(words)
for elements in dictionary:
    if dictionary[elements] == 1:
        c.write(str(elements))
        # print(elements)
