try:
 import tkinter
except ImportError:
    import Tkinter as tkinter

mainwindow=tkinter.Tk()

mainwindow.geometry('320x320-8-200')
mainwindow.title('CALCULATOR')
mainwindow['padx'] = 8
mainwindow['pady'] = 8

mainwindow.columnconfigure(0, weight = 3)
mainwindow.columnconfigure(1, weight = 3)
mainwindow.columnconfigure(2, weight = 3)
mainwindow.columnconfigure(3, weight = 3)
mainwindow.columnconfigure(4, weight = 1)

mainwindow.rowconfigure(0, weight = 3)
mainwindow.rowconfigure(1, weight = 3)
mainwindow.rowconfigure(2, weight = 3)
mainwindow.rowconfigure(3, weight = 3)
mainwindow.rowconfigure(4, weight = 3)
mainwindow.rowconfigure(5, weight = 3)
mainwindow.rowconfigure(6, weight = 1)

fieldframe=tkinter.Frame(mainwindow)
fieldframe.grid(row=0, column=0)
field=tkinter.Entry(fieldframe, width=30)
field.grid(row=0, column=0, columnspan=5, sticky='e')
buttonframe=tkinter.Frame(mainwindow)
buttonframe['pady']=8
buttonframe.grid(row=1, column=0, sticky='ns')

tkinter.Button(buttonframe, text='C', width=5, height=2).grid(column=0, row=1)
tkinter.Button(buttonframe, text='CE', width=5, height=2).grid(column=1, row=1)
tkinter.Button(buttonframe, text='7', width=5, height=2).grid(column=0, row=2)
tkinter.Button(buttonframe, text='8', width=5, height=2).grid(column=1, row=2)
tkinter.Button(buttonframe, text='9', width=5, height=2).grid(column=2, row=2)
tkinter.Button(buttonframe, text='+', width=5, height=2).grid(column=3, row=2)
tkinter.Button(buttonframe, text='4', width=5, height=2).grid(column=0, row=3)
tkinter.Button(buttonframe, text='5', width=5, height=2).grid(column=1, row=3)
tkinter.Button(buttonframe, text='6', width=5, height=2).grid(column=2, row=3)
tkinter.Button(buttonframe, text='-', width=5, height=2).grid(column=3, row=3)
tkinter.Button(buttonframe, text='1', width=5, height=2).grid(column=0, row=4)
tkinter.Button(buttonframe, text='2', width=5, height=2).grid(column=1, row=4)
tkinter.Button(buttonframe, text='3', width=5, height=2).grid(column=2, row=4)
tkinter.Button(buttonframe, text='x', width=5, height=2).grid(column=3, row=4)
tkinter.Button(buttonframe, text='0', width=5, height=2).grid(column=0, row=5)
tkinter.Button(buttonframe, text='=', width=5, height=2).grid(column=1, row=5, columnspan=2, sticky='ew')
tkinter.Button(buttonframe, text='/', width=5, height=2).grid(column=3, row=5)

mainwindow.update()
mainwindow.minsize(buttonframe.winfo_width()+16, field.winfo_height()+buttonframe.winfo_height())
mainwindow.maxsize(buttonframe.winfo_width()+16, field.winfo_height()+buttonframe.winfo_height())

mainwindow.mainloop()
