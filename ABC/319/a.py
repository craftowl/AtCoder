import sys

user = """tourist 3858,ksun48 3679,Benq 3658,Um_nik 3648,apiad 3638,Stonefeang 3630,ecnerwala 3613,mnbvmar 3555,newbiedmy 3516,semiexp 3481"""

tmp = list(map(str, user.split(',')))
usr_list = {}
for u in tmp:
    u_s = u.split()
    usr_list[u_s[0]] = int(u_s[1])

s = input()
print(usr_list[s])
