    def file_sum(filename):
        total=0
        for line in open(filename):
             allnumber=list(map(int,line.strip('\n').split()))
             total+=sum(allnumber)
        return total
     
    def Main():
        filename=input("Enter File Name :>").strip('\n');
        sum_of_nums=file_sum(filename)
        print('Result ',sum_of_nums)
     
    if __name__=='__main__':
        Main()
