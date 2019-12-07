import turtle
myPen =  turtle.Turtle()
tabula =  turtle.Screen()

tabula.bgcolor("black")
myPen.speed(0)

side=1 #dlzka strany
y=50 #pocet opakovani v loope
x=90.5 #otocenie korytnacky v loope
myPen.pencolor("dimgray")
for i in range (1,y):
  myPen.forward(side)
  myPen.left(x)
  side=side+1

myPen.pencolor("gray")
for i in range (1,y):
  myPen.forward(side)
  myPen.left(x)
  side = side + 1

myPen.pencolor("darkgray")
for i in range (1,y):
  myPen.forward(side)
  myPen.left(x)
  side = side + 1

myPen.pencolor("silver")
for i in range (1,y):
  myPen.forward(side)
  myPen.left(x)
  side = side + 1

myPen.pencolor("lightgray")
for i in range (1,y):
  myPen.forward(side)
  myPen.left(x)
  side = side + 1

myPen.pencolor("gainsboro")
for i in range (1,y):
  myPen.forward(side)
  myPen.left(x)
  side = side + 1

myPen.pencolor("whitesmoke")
for i in range (1,y):
  myPen.forward(side)
  myPen.left(x)
  side = side + 1

myPen.pencolor("white")
for i in range (1,y):
  myPen.forward(side)
  myPen.left(x)
  side = side + 1

#myPen.pencolor("white")
for i in range (1,y):
  myPen.forward(side)
  myPen.left(x)
  side = side + 1

#myPen.pencolor("white")
for i in range (1,y):
  myPen.forward(side)
  myPen.left(x)
  side = side + 1


myPen.forward(200)
myPen.hideturtle()

tabula.mainloop()

