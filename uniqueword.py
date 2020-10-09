import re
word2=['']

b=open("text_file_1.txt",'r+')
with open ('text_file_1.txt') as f:
    for i in f:
        word1=re.split("[\W]+",i)
        word2.extend(word1)
b.close()
b=open("text_file_1.txt",'w')
word2=list(dict.fromkeys(word2))
for elements in word2:
    print(elements)
    # if dictionary[elements] == 1:
    b.write(str(elements)+'\n')