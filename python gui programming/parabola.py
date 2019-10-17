try:
 import tkinter
except ImportError:
    import Tkinter as tkinter

def parabola(canvas, size):

    for x in range(-size, size):
        y = x*x / size
        plot(canvas, x, -y)
        plot(canvas, x, y)


def parabola_inverted(canvas, size):

    for y in range(-size, size):
        x = y*y / size
        plot(canvas, x, -y)
        plot(canvas, -x, y)

def draw_axis(canvas):
    canvas.update()
    x_origin = canvas.winfo_width() / 2
    y_origin = canvas.winfo_height() / 2
    canvas.configure(scrollregion = (-x_origin, -y_origin, x_origin, y_origin))
    canvas.create_line(-x_origin, 0, x_origin, 0, fill='white')
    canvas.create_line(0, -y_origin, 0, y_origin, fill='white')


def plot(canvas, x, y):
    canvas.create_line(x, y, x+1, y+1, fill='red')

mainwindow = tkinter.Tk()
mainwindow.title("PARABOLA")
mainwindow.geometry('600x600')

canvas = tkinter.Canvas(mainwindow, width=600, height=600, bg='black')
canvas.grid(row=0, column=0)
draw_axis(canvas)

parabola(canvas, 100)
parabola(canvas, 200)
parabola(canvas, 300)
parabola(canvas, 400)
parabola(canvas, 500)

mainwindow.mainloop()