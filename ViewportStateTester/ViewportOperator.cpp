#include "ViewportOperator.h"
#include <qDebug>

CObjectSelect::CObjectSelect( EViewportState eViewportState )
: CViewportOperatorAbstract( eViewportState )
{

}

CObjectSelect::~CObjectSelect()
{

}

void CObjectSelect::MousePress()
{
    qDebug() << "Object Select Press.";
}

void CObjectSelect::MouseMove()
{
    qDebug() << "Object Select Move.";
}

void CObjectSelect::MouseRelease()
{
    qDebug() << "Object Select Release.";
}

void CObjectSelect::MouseClick()
{
    qDebug() << "Object Select Click.";
}

void CObjectSelect::MouseDoubleClick()
{
    qDebug() << "Object Select DoubleClick.";
}

void CObjectSelect::MouseWheel()
{
    qDebug() << "Object Select Wheel.";
}

CObjectMove::CObjectMove( EViewportState eViewportState )
: CViewportOperatorAbstract( eViewportState )
{

}

CObjectMove::~CObjectMove()
{

}

void CObjectMove::MousePress()
{
    qDebug() << "Object Move Press.";
}

void CObjectMove::MouseMove()
{
    qDebug() << "Object Move Move.";
}

void CObjectMove::MouseRelease()
{
    qDebug() << "Object Move Release.";
}

void CObjectMove::MouseClick()
{
    qDebug() << "Object Move Click.";
}

void CObjectMove::MouseDoubleClick()
{
    qDebug() << "Object Move DoubleClick.";
}

void CObjectMove::MouseWheel()
{
    qDebug() << "Object Move Wheel.";
}

CObjectRotate::CObjectRotate( EViewportState eViewportState )
: CViewportOperatorAbstract( eViewportState )
{

}

CObjectRotate::~CObjectRotate()
{

}

void CObjectRotate::MousePress()
{
    qDebug() << "Object Rotate Press.";
}

void CObjectRotate::MouseMove()
{
    qDebug() << "Object Rotate Move.";
}

void CObjectRotate::MouseRelease()
{
    qDebug() << "Object Rotate Release.";
}

void CObjectRotate::MouseClick()
{
    qDebug() << "Object Rotate Click.";
}

void CObjectRotate::MouseDoubleClick()
{
    qDebug() << "Object Rotate DoubleClick.";
}

void CObjectRotate::MouseWheel()
{
    qDebug() << "Object Rotate Wheel.";
}

CObjectScale::CObjectScale( EViewportState eViewportState )
: CViewportOperatorAbstract( eViewportState )
{

}

CObjectScale::~CObjectScale()
{

}

void CObjectScale::MousePress()
{
    qDebug() << "Object Scale Press.";
}

void CObjectScale::MouseMove()
{
    qDebug() << "Object Scale Move.";
}

void CObjectScale::MouseRelease()
{
    qDebug() << "Object Scale Release.";
}

void CObjectScale::MouseClick()
{
    qDebug() << "Object Scale Click.";
}

void CObjectScale::MouseDoubleClick()
{
    qDebug() << "Object Scale DoubleClick.";
}

void CObjectScale::MouseWheel()
{
    qDebug() << "Object Scale Wheel.";
}

CCamMove::CCamMove( EViewportState eViewportState )
: CViewportOperatorAbstract( eViewportState )
{

}

CCamMove::~CCamMove()
{

}

void CCamMove::MousePress()
{
    qDebug() << "Camera Move Press.";
}

void CCamMove::MouseMove()
{
    qDebug() << "Camera Move Move.";
}

void CCamMove::MouseRelease()
{
    qDebug() << "Camera Move Release.";
}

void CCamMove::MouseClick()
{
    qDebug() << "Camera Move Click.";
}

void CCamMove::MouseDoubleClick()
{
    qDebug() << "Camera Move DoubleClick.";
}

void CCamMove::MouseWheel()
{
    qDebug() << "Camera Move Wheel.";
}

CCamRotate::CCamRotate( EViewportState eViewportState )
: CViewportOperatorAbstract( eViewportState )
{

}

CCamRotate::~CCamRotate()
{

}

void CCamRotate::MousePress()
{
    qDebug() << "Camera Scale Press.";
}

void CCamRotate::MouseMove()
{
    qDebug() << "Camera Scale Move.";
}

void CCamRotate::MouseRelease()
{
    qDebug() << "Camera Scale Release.";
}

void CCamRotate::MouseClick()
{
    qDebug() << "Camera Scale Click.";
}

void CCamRotate::MouseDoubleClick()
{
    qDebug() << "Camera Scale DoubleClick.";
}

void CCamRotate::MouseWheel()
{
    qDebug() << "Camera Scale Wheel.";
}

CCamZoom::CCamZoom( EViewportState eViewportState )
: CViewportOperatorAbstract( eViewportState )
{

}

CCamZoom::~CCamZoom()
{

}

void CCamZoom::MousePress()
{
    qDebug() << "Camera Zoom Press.";
}

void CCamZoom::MouseMove()
{
    qDebug() << "Camera Zoom Move.";
}

void CCamZoom::MouseRelease()
{
    qDebug() << "Camera Zoom Release.";
}

void CCamZoom::MouseClick()
{
    qDebug() << "Camera Zoom Click.";
}

void CCamZoom::MouseDoubleClick()
{
    qDebug() << "Camera Zoom DoubleClick.";
}

void CCamZoom::MouseWheel()
{
    qDebug() << "Camera Zoom Wheel.";
}

CBoneSelect::CBoneSelect( EViewportState eViewportState )
: CViewportOperatorAbstract( eViewportState )
{

}

CBoneSelect::~CBoneSelect()
{

}

void CBoneSelect::MousePress()
{
    qDebug() << "Bone Select Press.";
}

void CBoneSelect::MouseMove()
{
    qDebug() << "Bone Select Move.";
}

void CBoneSelect::MouseRelease()
{
    qDebug() << "Bone Select Release.";
}

void CBoneSelect::MouseClick()
{
    qDebug() << "Bone Select Click.";
}

void CBoneSelect::MouseDoubleClick()
{
    qDebug() << "Bone Select DoubleClick.";
}

void CBoneSelect::MouseWheel()
{
    qDebug() << "Bone Select Wheel.";
}

CBoneMove::CBoneMove( EViewportState eViewportState )
: CViewportOperatorAbstract( eViewportState )
{

}

CBoneMove::~CBoneMove()
{

}

void CBoneMove::MousePress()
{
    qDebug() << "Bone Move Press.";
}

void CBoneMove::MouseMove()
{
    qDebug() << "Bone Move Move.";
}

void CBoneMove::MouseRelease()
{
    qDebug() << "Bone Move Release.";
}

void CBoneMove::MouseClick()
{
    qDebug() << "Bone Move Click.";
}

void CBoneMove::MouseDoubleClick()
{
    qDebug() << "Bone Move DoubleClick.";
}

void CBoneMove::MouseWheel()
{
    qDebug() << "Bone Move Wheel.";
}

CBoneRotate::CBoneRotate( EViewportState eViewportState )
: CViewportOperatorAbstract( eViewportState )
{

}

CBoneRotate::~CBoneRotate()
{

}

void CBoneRotate::MousePress()
{
    qDebug() << "Bone Rotate Press.";
}

void CBoneRotate::MouseMove()
{
    qDebug() << "Bone Rotate Move.";
}

void CBoneRotate::MouseRelease()
{
    qDebug() << "Bone Rotate Release.";
}

void CBoneRotate::MouseClick()
{
    qDebug() << "Bone Rotate Click.";
}

void CBoneRotate::MouseDoubleClick()
{
    qDebug() << "Bone Rotate DoubleClick.";
}

void CBoneRotate::MouseWheel()
{
    qDebug() << "Bone Rotate Wheel.";
}

CPathSelect::CPathSelect( EViewportState eViewportState )
: CViewportOperatorAbstract( eViewportState )
{

}

CPathSelect::~CPathSelect()
{

}

void CPathSelect::MousePress()
{
    qDebug() << "Path Select Press.";
}

void CPathSelect::MouseMove()
{
    qDebug() << "Path Select Move.";
}

void CPathSelect::MouseRelease()
{
    qDebug() << "Path Select Release.";
}

void CPathSelect::MouseClick()
{
    qDebug() << "Path Select Click.";
}

void CPathSelect::MouseDoubleClick()
{
    qDebug() << "Path Select DoubleClick.";
}

void CPathSelect::MouseWheel()
{
    qDebug() << "Path Select Wheel.";
}

CPathMove::CPathMove( EViewportState eViewportState )
: CViewportOperatorAbstract( eViewportState )
{

}

CPathMove::~CPathMove()
{

}

void CPathMove::MousePress()
{
    qDebug() << "Path Move Press.";
}

void CPathMove::MouseMove()
{
    qDebug() << "Path Move Move.";
}

void CPathMove::MouseRelease()
{
    qDebug() << "Path Move Release.";
}

void CPathMove::MouseClick()
{
    qDebug() << "Path Move Click.";
}

void CPathMove::MouseDoubleClick()
{
    qDebug() << "Path Move DoubleClick.";
}

void CPathMove::MouseWheel()
{
    qDebug() << "Path Move Wheel.";
}

CPathRotate::CPathRotate( EViewportState eViewportState )
: CViewportOperatorAbstract( eViewportState )
{

}

CPathRotate::~CPathRotate()
{

}

void CPathRotate::MousePress()
{
    qDebug() << "Path Rotate Press.";
}

void CPathRotate::MouseMove()
{
    qDebug() << "Path Rotate Move.";
}

void CPathRotate::MouseRelease()
{
    qDebug() << "Path Rotate Release.";
}

void CPathRotate::MouseClick()
{
    qDebug() << "Path Rotate Click.";
}

void CPathRotate::MouseDoubleClick()
{
    qDebug() << "Path Rotate DoubleClick.";
}

void CPathRotate::MouseWheel()
{
    qDebug() << "Path Rotate Wheel.";
}

CPathScale::CPathScale( EViewportState eViewportState )
: CViewportOperatorAbstract( eViewportState )
{

}

CPathScale::~CPathScale()
{

}

void CPathScale::MousePress()
{
    qDebug() << "Path Scale Press.";
}

void CPathScale::MouseMove()
{
    qDebug() << "Path Scale Move.";
}

void CPathScale::MouseRelease()
{
    qDebug() << "Path Scale Release.";
}

void CPathScale::MouseClick()
{
    qDebug() << "Path Scale Click.";
}

void CPathScale::MouseDoubleClick()
{
    qDebug() << "Path Scale DoubleClick.";
}

void CPathScale::MouseWheel()
{
    qDebug() << "Path Scale Wheel.";
}