l=[('Tom', '12/04/1999', '65kg'), ('Ab de', '17/02/1990', '63kg'), ('Kholi', '16/02/1985', '62kg'), ('Chahal', '25/09/1985', '61kg')]

# print(len(l))
s_n=[]
s_b=[]
s_w=[]
for i in l:
    s_n.append(i[0])
    s_b.append(i[1])
    l=len(i[2])-2
    s_w.append(int(i[2][0:l]))
print('Student name: ',s_n)
print('Student birthday: ',s_b)
print('Student weight: ',s_w)