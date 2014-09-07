#pragma once

#include "ViewportOperatorAbstract.h"

class CObjectSelect : public CViewportOperatorAbstract
{
public:
    CObjectSelect( EViewportState eViewportState );
    ~CObjectSelect();

    virtual void MousePress() override;
    virtual void MouseMove() override;
    virtual void MouseRelease() override;
    virtual void MouseClick() override;
    virtual void MouseDoubleClick() override;
    virtual void MouseWheel() override;
};

class CObjectMove : public CViewportOperatorAbstract
{
public:
    CObjectMove( EViewportState eViewportState );
    ~CObjectMove();

    virtual void MousePress() override;
    virtual void MouseMove() override;
    virtual void MouseRelease() override;
    virtual void MouseClick() override;
    virtual void MouseDoubleClick() override;
    virtual void MouseWheel() override;
};

class CObjectRotate : public CViewportOperatorAbstract
{
public:
    CObjectRotate( EViewportState eViewportState );
    ~CObjectRotate();

    virtual void MousePress() override;
    virtual void MouseMove() override;
    virtual void MouseRelease() override;
    virtual void MouseClick() override;
    virtual void MouseDoubleClick() override;
    virtual void MouseWheel() override;
};

class CObjectScale : public CViewportOperatorAbstract
{
public:
    CObjectScale( EViewportState eViewportState );
    ~CObjectScale();

    virtual void MousePress() override;
    virtual void MouseMove() override;
    virtual void MouseRelease() override;
    virtual void MouseClick() override;
    virtual void MouseDoubleClick() override;
    virtual void MouseWheel() override;
};

class CCamMove : public CViewportOperatorAbstract
{
public:
    CCamMove( EViewportState eViewportState );
    ~CCamMove();

    virtual void MousePress() override;
    virtual void MouseMove() override;
    virtual void MouseRelease() override;
    virtual void MouseClick() override;
    virtual void MouseDoubleClick() override;
    virtual void MouseWheel() override;
};

class CCamRotate : public CViewportOperatorAbstract
{
public:
    CCamRotate( EViewportState eViewportState );
    ~CCamRotate();

    virtual void MousePress() override;
    virtual void MouseMove() override;
    virtual void MouseRelease() override;
    virtual void MouseClick() override;
    virtual void MouseDoubleClick() override;
    virtual void MouseWheel() override;
};

class CCamZoom : public CViewportOperatorAbstract
{
public:
    CCamZoom( EViewportState eViewportState );
    ~CCamZoom();

    virtual void MousePress() override;
    virtual void MouseMove() override;
    virtual void MouseRelease() override;
    virtual void MouseClick() override;
    virtual void MouseDoubleClick() override;
    virtual void MouseWheel() override;
};

class CBoneSelect : public CViewportOperatorAbstract
{
public:
    CBoneSelect( EViewportState eViewportState );
    ~CBoneSelect();

    virtual void MousePress() override;
    virtual void MouseMove() override;
    virtual void MouseRelease() override;
    virtual void MouseClick() override;
    virtual void MouseDoubleClick() override;
    virtual void MouseWheel() override;
};

class CBoneMove : public CViewportOperatorAbstract
{
public:
    CBoneMove( EViewportState eViewportState );
    ~CBoneMove();

    virtual void MousePress() override;
    virtual void MouseMove() override;
    virtual void MouseRelease() override;
    virtual void MouseClick() override;
    virtual void MouseDoubleClick() override;
    virtual void MouseWheel() override;
};

class CBoneRotate : public CViewportOperatorAbstract
{
public:
    CBoneRotate( EViewportState eViewportState );
    ~CBoneRotate();

    virtual void MousePress() override;
    virtual void MouseMove() override;
    virtual void MouseRelease() override;
    virtual void MouseClick() override;
    virtual void MouseDoubleClick() override;
    virtual void MouseWheel() override;
};

class CPathSelect : public CViewportOperatorAbstract
{
public:
    CPathSelect( EViewportState eViewportState );
    ~CPathSelect();

    virtual void MousePress() override;
    virtual void MouseMove() override;
    virtual void MouseRelease() override;
    virtual void MouseClick() override;
    virtual void MouseDoubleClick() override;
    virtual void MouseWheel() override;
};

class CPathMove : public CViewportOperatorAbstract
{
public:
    CPathMove( EViewportState eViewportState );
    ~CPathMove();

    virtual void MousePress() override;
    virtual void MouseMove() override;
    virtual void MouseRelease() override;
    virtual void MouseClick() override;
    virtual void MouseDoubleClick() override;
    virtual void MouseWheel() override;
};

class CPathRotate : public CViewportOperatorAbstract
{
public:
    CPathRotate( EViewportState eViewportState );
    ~CPathRotate();

    virtual void MousePress() override;
    virtual void MouseMove() override;
    virtual void MouseRelease() override;
    virtual void MouseClick() override;
    virtual void MouseDoubleClick() override;
    virtual void MouseWheel() override;
};

class CPathScale : public CViewportOperatorAbstract
{
public:
    CPathScale( EViewportState eViewportState );
    ~CPathScale();

    virtual void MousePress() override;
    virtual void MouseMove() override;
    virtual void MouseRelease() override;
    virtual void MouseClick() override;
    virtual void MouseDoubleClick() override;
    virtual void MouseWheel() override;
};