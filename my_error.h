/*************************************************************************
	> File Name: my_error.h
	> Author: ZhouPan / git:dreamer2018
	> Mail: zhoupans_mail@163.com
	> Blog: blog.csdn.net/it_dream_er 
	> Created Time: Wed 12 Aug 2015 01:54:53 PM CST
 ************************************************************************/

#ifndef _MY_ERROR_H
#define _MY_ERROR_H

typedef struct System_Error_log  //系统错误记录函数
{
    time_t time;                //错误发生的时间
    char name[21];              //发生错误时的用户名
    char message[256];          //错误信息
}error_node_t;

typedef struct System_Register_Log //系统登录注册记录函数
{
    time_t time;            //登录/注册的时间
    int type;               //事件类型：0：注册 1：登录
    char name[21];          //注册/登录的用户名
    char address[16];       //登录客户端ip
    char message[256];      //登录/注册信息：成功，失败，失败原因
}register_node_t ;

void Error_Log(char *name,char *message)
{
    error_node_t buf;
    time_t now;
    time(&now);
    buf.time=now;
    strcpy(buf.name,name);
    strcpy(buf.message,message);
}

void Register_Log(int type,char *name,char *addr,char *message)
{
    error_node_t buf;
    time_t now;
    time(&now);
    buf.time=now;
    buf.type=type;
    strcpy(buf.name,name);
    strcpy(buf.addr,addr);
    strcpy(buf.message,message);
}

void Error_Perst_Log(error_node_t *buf)
{
    FILE *fp;
    fp=open()
}

#endif
