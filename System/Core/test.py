import os
path_li = []
for root,path,file in os.walk("../../Data/"):
    for i in path:
        path_li.append(i)
print(path_li)