def merge_sort_function(Arr1):
    if len(Arr1) > 1:
        middle_Index = len(Arr1)//2
        m1 = Arr1[:middle_Index]
        m2 = Arr1[middle_Index:]

        merge_sort_function(m1)
        merge_sort_function(m2)

        x = y = z = 0
        while x < len(m1) and y < len(m2):
            if m1[x] < m2[y]:
                Arr1[z] = m1[x]
                x += 1
            else:
                Arr1[z] = m2[y]
                y += 1
            z += 1

        while x < len(m1):
            Arr1[z] = m1[x]
            x += 1
            z += 1

        while y < len(m2):
            Arr1[z] = m2[y]
            y += 1
            z += 1


Arr1 = [-1, 35, 0, 9, -8]
merge_sort_function(Arr1)
print("Sorted array is: ")
print(Arr1)
