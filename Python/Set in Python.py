# Creating a Set
set_value = set("codingeek.com")
print("\nThe Set contains: ")
print(set_value)
# Creating a Set using variable
str = 'Teamspirit'
set_value = set(str)
print("\nThe Set contains: ")
print(set_value)
# Creating a Set using a List
set1_value = set(["Best", "Learning", "Platform"])
print("\nSet with the use of List: ")
print(set_value)

################################################################

# Set with duplicate values
set_value = set([1, 2, 4, 4, 3, 3, 3, 6, 5])
print("\nSet contains: ")
print(set_value)

# Set with mixed type of values
set_value = set([8, 7, 'python', 3, 'For', 1, 'learners'])
print("\nSet contains: ")
print(set_value)

#################################################################

# Adding element to the Set
set_value = set()
set_value.add(8)
set_value.add(9)
print("\nSet contains: ")
print(set_value)
# Adding tuple to the set
set_value.add((1, 7))
print("\nSet contains: ")
print(set_value)
# Adding elements using Iterator
for i in range(0, 10):
  set_value.add(i)
print("\nSet finally contains: ")
print(set_value)

###################################################################

# using Update()
set_value = set([ 6, 9, (4, 5)])
# uplicate 6,9 willl be reemoved
set_value.update([1, 13, 6, 9])
print("\nSet contains: ")
print(set_value)

##################################################################

set_value = set(["Apple", "Orange", "Mango", "Grape"])
print("Elements contained in the set are: ")
for i in set_value:
  print(i, end=" ")
print("\n")
# membership test
print("Mango" in set_value)

###################################################################

set_value = set([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12])
# using Remove() method
set_value.remove(5)
set_value.remove(6)
print("\nSet contains(after removing): ")
print(set_value)
# using iterator method to remove element
for i in range(2, 8):
    set_value.remove(i)

print("\nSet contains(after removing): ")
print(set_value)

###################################################################

set_value = set([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12])
# using discard() method
set_value.discard(4)
set_value.discard(10)
# no error on discarding a non existing value
set_value.discard(10)
print("\nSet contains(after discarding: ")
print(set_value)

#####################################################################

set_value = set([1, 5, 7, 11, 15])
# Removing the elements using clear()
set_value.clear()
print("\nSet contains: ", set_value)

#####################################################################

set_value = set([1, 2, 3, 4, 5])
# Removing element using pop()
print("Popped value - ", set_value.pop())
print("Remaining values : ", set_value)

#####################################################################

tup = ('L', 'e', 'a', 'r', 'n', 'e', 'r', 's')
fSet1 = frozenset(tup)
print("FrozenSet contains: ", fSet1)
# No parameter is passed
fSet2 = frozenset()
print("\nFrozenSet contains: ", fSet2)
print("Is disjoint - ", fSet1.isdisjoint(fSet2))
print("Difference - ", fSet1.difference(fSet2))