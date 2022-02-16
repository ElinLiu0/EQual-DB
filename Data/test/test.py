import pickle
with open("test.rc","rb") as reader:
    read_data = pickle.load(reader)
    print(read_data.split("\n")[1])