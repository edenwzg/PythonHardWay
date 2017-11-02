#!/usr/bin/env python
# -*- coding: utf-8 -*-

background_image_filename = 'sushiplate.jpg'
mouse_image_filename = 'fugu.png'


import pygame
from pygame.locals import *
from sys import exit

# 初始化pygame,为使用硬件做准备
pygame.init()

SCREEN_SIZE = (640, 480)

screen = pygame.display.set_mode(SCREEN_SIZE, 0, 32)
pygame.display.set_caption("Hello, World!")

font = pygame.font.SysFont("arial", 16)
font_height = font.get_linesize()
event_text = []

# 加载并转换图像 convert() 是将图像数据都转化为Surface对象
background = pygame.image.load(background_image_filename).convert()
mouse_cursor = pygame.image.load(mouse_image_filename).convert_alpha()

# 游戏主循环
while True:
    event = pygame.event.wait()
    event_text.append(str(event))
    # 这个切片操作保证了 event_text 里面只保留一个屏幕的文字
    event_text = event_text[-SCREEN_SIZE[1]/font_height:]
    # 接收到退出事件后退出程序
    if event.type == QUIT:
        exit()
 
    screen.fill((0, 255, 0))

    # 找一个适合起笔的位置，最下面开始但是要留一行的空
    y = SCREEN_SIZE[1] - font_height

    for text in reversed(event_text):
        # 以后会讲
        screen.blit(font.render(text, True, (0, 0, 0)), (0, y))
        # 把笔提一行
        y -= font_height


    # 将背景图画上去
    # screen.blit(background, (0,0))
    # 获得鼠标位置
    x, y = pygame.mouse.get_pos()
    # 让光标在图像中间
    x -= mouse_cursor.get_width() / 2
    y -= mouse_cursor.get_height() / 2
    
    # 把光标画图像上去
    screen.blit(mouse_cursor, (x, y))
    # 刷新一下画面
    pygame.display.update()
    