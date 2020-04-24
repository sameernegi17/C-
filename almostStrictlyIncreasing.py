'''
Given a sequence of integers as an array, determine whether it is possible to obtain a strictly increasing sequence by removing no more than one element from the array.

sequence = [1, 3, 2, 1], the output should be
almostIncreasingSequence(sequence) = false.

sequence = [1, 3, 2], the output should be
almostIncreasingSequence(sequence) = true.

sequence = [10, 1, 2, 3 ,4, 5], the output should be
almostIncreasingSequence(sequence) = true.

sequence = [1, 2, 1, 2], the output should be
almostIncreasingSequence(sequence) = false.

sequence = [1, 2, 5, 3 , 5], the output should be
almostIncreasingSequence(sequence) = false.
'''
def find_bad_pair(sequence):
    for i in range(0,len(sequence)-1):
        if sequence[i] >= sequence[i+1]:
            return i
    return -1


def almostIncreasingSequence(sequence):
    j = find_bad_pair(sequence)
    if j == -1:
        return True
    print(sequence[-1:0])
    if find_bad_pair(sequence[j-1:j] + sequence[j+1:]) == -1:
        return True
    if find_bad_pair(sequence[j:j+1] + sequence[j+2:]) == -1:
        return True
    return False
    


if __name__ == "__main__":
    print("The Test of [1, 3, 2, 1] is " + str(almostIncreasingSequence([1, 3, 2, 1])))
    print("The Test of [1, 3, 2] is " + str(almostIncreasingSequence([1, 3, 2])))  
    print("The Test of [10, 1, 2, 3 ,4, 5] is " + str(almostIncreasingSequence([10, 1, 2, 3 ,4, 5])))  
    print("The Test of [1, 2, 1, 2] is " + str(almostIncreasingSequence([1, 2, 1, 2])))  
    print("The Test of [1, 2, 5, 3 , 5] is " + str(almostIncreasingSequence([1, 2, 5, 3 , 5])))      