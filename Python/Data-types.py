def Integer():
    number1 = 10
    print("\t\t"+str(number1) +" is a "+ str(type(number1)))
    number2 = -10
    print("\t\t"+str(number2) +" is a "+ str(type(number2)))
    number3 = 48697
    print("\t\t"+str(number3) +" is a "+ str(type(number3)))
    number4 = -14589
    print("\t\t"+str(number4) +" is a "+ str(type(number4)))

def decimal():
    number1 = 2.3
    print("\t\t"+str(number1) +" is a "+ str(type(number1)))
    number2 = -5.9
    print("\t\t"+str(number2) +" is a "+ str(type(number2)))
    number3 = 4e23
    print("\t\t"+str(number3) +" is a "+ str(type(number3)))
    number4 = -4e+23
    print("\t\t"+str(number4) +" is a "+ str(type(number4)))

def Complex_number():
    number1 = 2+3j
    print("\t\t"+str(number1) +" is a "+ str(type(number1)))
    number2 = 5.89j
    print("\t\t"+str(number2) +" is a "+ str(type(number2)))
    number3 = 5-7j
    print("\t\t"+str(number3) +" is a "+ str(type(number3)))
    number4 = 1j
    print("\t\t"+str(number4) +" is a "+ str(type(number4)))

def string():
    Sentence1 = "It's a Beautiful Day to Save lives"
    print("\t"+str(Sentence1) +" is a "+ str(type(Sentence1)))
    Sentence2 = 'Dance it out'
    print("\t"+str(Sentence2) +" is a "+ str(type(Sentence2)))

def List():
    List1 = [2,4,5,2]
    print("\t"+str(List1)+" is a "+ str(type(List1)))
    List2 = list()
    print("\t"+str(List2)+" is a "+ str(type(List2)))
    List3 = ["Hello",5,-7]
    print("\t"+str(List3)+" is a "+ str(type(List3)))
    print("\t List3[1] =" + str(List3[1]) ) #If we want to access the second element

def Tuple():
    Tuple1 = (1,"Hello",-5,1)
    print("\t"+str(Tuple1)+" is a "+ str(type(Tuple1)))
    Tuple2 = ()
    print("\t"+str(Tuple2)+" is a "+ str(type(Tuple2)))
    Tuple3 = ("Name",)
    print("\t"+str(Tuple3)+" is a "+ str(type(Tuple3)))

def Set():
    Set1 = {5,"MerDer" ,7.0 }
    print("\t"+str(Set1)+" is a "+ str(type(Set1)))
    Set2 = {"I ", "am" , "your" , "person"}
    print("\t"+str(Set2)+" is a "+ str(type(Set2)))
    Set2 = frozenset(Set2)
    print("\t"+str(Set2)+" is a "+ str(type(Set2)))

def Dictionary():
    Dictionary1 = {1:"MerDer" , 2:"MerDer" }
    print("\t"+str(Dictionary1)+" is a "+ str(type(Dictionary1)))
    Dictionary2 = {}
    print("\t"+str(Dictionary2)+" is a "+ str(type(Dictionary2)))
    Dictionary3 = {"Derek" : "It's a beautiful day to save lives" , 143:"Meredith"}
    print("\t"+str(Dictionary3)+" is a "+ str(type(Dictionary3)))

def Boolean():
    a = True
    print("\t"+str(a)+" is a "+ str(type(a)))
    b = False
    print("\t"+str(b)+" is a "+ str(type(b)))

if __name__== '__main__':
    print("Number : ")
    print("\t Integer :")
    Integer()
    print("\t Decimal :")
    decimal()
    print("\t Complex Numbers :")
    Complex_number()
    print("String :")
    string()
    print("List :")
    List()
    print("Tuple :")
    Tuple()
    print("Set :")
    Set()
    print("Dictionary :")
    Dictionary()
    
    