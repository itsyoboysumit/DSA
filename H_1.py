'''Write a menu driven program to implement Circular Link List and perform the following operations:
1.Creation
2.Insertion
3.After a specific node
4.Before a specific node
5.Searching
6.Trasversing
7.Deletion of a particular node'''

class node:
    def __init__(self,data):
        self.data=data
        self.next= None

head=None
lastnode=None

def insertion():
    global head, lastnode
    item = int(input("Enter the element to be inserted:"))
    temp=node(item)
    #head case or first case
    if head==None:
        head=temp
        lastnode=temp
        lastnode.next=head
        return
    lastnode.next=temp
    lastnode=temp
    lastnode.next=head

def searching():
    global head
    if head==None:
        print("Empty")
        return
    dh=head
    se= int (input('Input the element to be searched:'))
    flag= False
    while True:
        if se==dh.data:
            flag=True
            break
        dh=dh.next
        if dh==head:
            break
    if flag==True:
        print('Got it')
    else:
        print ('Not found')

def trasversing():
    global head
    if head is None:
        print('Enpty!')
        return
    dh=head
    while True:
        print(dh.data,end=" ")
        dh=dh.next
        if dh==head:
            break


def main():
    global head, lastnode
    head=None
    lastnode=None
    
    menu={

        1:insertion,
        2:searching,
        3:trasversing,
        4:exit
    }
    while True:
        print("\n\tPRESS\n*************************\n1 for insertion\n2 for searching\n3 for traversing\n4 for exit\n*****************************")
        n=int(input('Enter choice:'))
        
        if n in menu:
            if n==4:
                print("'Exited'")
                break
            menu[n]() #calling the function using directory
        else:
            print('Invalid Choice!')
            break
if __name__ =="__main__":
    main()


