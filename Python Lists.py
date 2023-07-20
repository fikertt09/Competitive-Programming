l=[]
if __name__ == '__main__':
    N = int(input())
    for i in range(N):
        task=str(input()).split()    
        try: eval('l.'+task[0]+'('+','.join(task[1:])+')')
        except: print(l) 
