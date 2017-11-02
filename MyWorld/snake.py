#!/usr/bin/env python
# -*- coding: utf-8 -*-

import pygame
from pygame.locals import *
from sys import exit

background_image_filename = 'sushiplate.jpg'
mouse_image_filename = 'fugu.png'
SCREEN_SIZE = (640, 480)
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
font_name = "arial"
Fullscreen = False

def get_system_display_mode():
    '''
    Get the display mode supported by the machine
    '''
    print pygame.display.list_modes()
def event_generator():
    '''
    this is a test function of generate event
    '''
    # generate system event
    my_event = pygame.event.Event(KEYDOWN, {'scancode':57, 'key':32, 'unicode':u'', 'mod':0})
    pygame.event.post(my_event)
    pygame.event.post(my_event)
    pygame.event.post(my_event)
    pygame.event.post(my_event)

    # generate custom event
    CATONKEYBOARD = USEREVENT + 1
    my_event = pygame.event.Event(CATONKEYBOARD, message = "Bad cat!")
    pygame.event.post(my_event)
def get_system_fonts():
    print pygame.font.get_fonts()


# Initialize pygame to prepare for using hadware
pygame.init()
# display.set_mode() # the second parameter is FULLSCREEN, set the full screen of the windows
screen = pygame.display.set_mode(SCREEN_SIZE, Fullscreen, 32)
# display.set_caption # set the window caption
pygame.display.set_caption("Hello, World!")
# font.SysFont() # set the game font as system font | font.Font() # use for TTF 
game_font = pygame.font.SysFont(font_name, 16)
font_height = game_font.get_linesize()
event_text = []

# image.load().convert() # load and Convert image data to surface objects
background = pygame.image.load(background_image_filename).convert()
mouse_cursor = pygame.image.load(mouse_image_filename).convert_alpha()

# test function ----
event_generator()

text_surface = game_font.render(u"你好", True, WHITE, BLACK)
pygame.image.save(text_surface, "name.png")

# game loop
while True:
    '''
    
    '''
    event = pygame.event.wait()
    if event.type == QUIT:
        exit()

    if event.type == KEYDOWN:
        if event.key == K_f:
            Fullscreen = not Fullscreen
            if Fullscreen:
                screen = pygame.display.set_mode((SCREEN_SIZE), FULLSCREEN, 32)
            else:
                screen = pygame.display.set_mode((SCREEN_SIZE), 0, 32)

    event_text.append(str(event))
    # 这个切片操作保证了 event_text 里面只保留一个屏幕的文字
    event_text = event_text[-SCREEN_SIZE[1]/font_height:]
    # 接收到退出事件后退出程序

 
    screen.fill(WHITE)

    # 找一个适合起笔的位置，最下面开始但是要留一行的空
    y = SCREEN_SIZE[1] - font_height

    for text in reversed(event_text):
        # render and bilt 
        screen.blit(game_font.render(text, True, BLACK), (0, y))
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
    