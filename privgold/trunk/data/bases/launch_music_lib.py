import VS
import vsrandom
GlobalMusic = VS.musicAddList ('launch.m3u')
def PlayLaunch ():
    if (GlobalMusic!= -1):
        VS.musicPlayList (GlobalMusic)
