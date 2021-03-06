#ifndef WARNINGMANAGER_H
#define WARNINGMANAGER_H
#include <iostream>
#include <fstream>
#include <cassert>
#include "Warning.h"
#include "../json/json.h"

class WarningManager
{
public:
    static WarningManager *m_Manager;

private:
	std::vector<Warning> m_Warnings;
protected:
    WarningManager();
    ~WarningManager();
private:
	void Init();
	bool Read_Warning_Info();									//读取warningjson配置文件
	void OnAction(Led_Action_Type m_Type);				//根据信号的不同，执行不同的操作
public:
    static  WarningManager * GetInstance();
};

#endif // WARNINGMANAGER_H
