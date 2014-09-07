#pragma once

#include "ViewportStateDef.h"

class CViewportOperatorAbstract
{
public:
    CViewportOperatorAbstract( EViewportState eViewportState );
    virtual ~CViewportOperatorAbstract();

    virtual void MousePress() = 0;
    virtual void MouseMove() = 0;
    virtual void MouseRelease() = 0;
    virtual void MouseClick() = 0;
    virtual void MouseDoubleClick() = 0;
    virtual void MouseWheel() = 0;

protected:
    const EViewportState m_eViewportState;
};

class CNullSelect : public CViewportOperatorAbstract
{
public:
    CNullSelect( EViewportState eViewportState );
    virtual ~CNullSelect();

    virtual void MousePress() override;
    virtual void MouseMove() override;
    virtual void MouseRelease() override;
    virtual void MouseClick() override;
    virtual void MouseDoubleClick() override;
    virtual void MouseWheel() override;
};

class CNullMove : public CViewportOperatorAbstract
{
public:
    CNullMove( EViewportState eViewportState );
    virtual ~CNullMove();

    virtual void MousePress() override;
    virtual void MouseMove() override;
    virtual void MouseRelease() override;
    virtual void MouseClick() override;
    virtual void MouseDoubleClick() override;
    virtual void MouseWheel() override;
};

class CNullRotate : public CViewportOperatorAbstract
{
public:
    CNullRotate( EViewportState eViewportState );
    virtual ~CNullRotate();

    virtual void MousePress() override;
    virtual void MouseMove() override;
    virtual void MouseRelease() override;
    virtual void MouseClick() override;
    virtual void MouseDoubleClick() override;
    virtual void MouseWheel() override;
};

class CNullScale : public CViewportOperatorAbstract
{
public:
    CNullScale( EViewportState eViewportState );
    virtual ~CNullScale();

    virtual void MousePress() override;
    virtual void MouseMove() override;
    virtual void MouseRelease() override;
    virtual void MouseClick() override;
    virtual void MouseDoubleClick() override;
    virtual void MouseWheel() override;
};

class CNullCamMove : public CViewportOperatorAbstract
{
public:
    CNullCamMove( EViewportState eViewportState );
    virtual ~CNullCamMove();

    virtual void MousePress() override;
    virtual void MouseMove() override;
    virtual void MouseRelease() override;
    virtual void MouseClick() override;
    virtual void MouseDoubleClick() override;
    virtual void MouseWheel() override;
};

class CNullCamRotate : public CViewportOperatorAbstract
{
public:
    CNullCamRotate( EViewportState eViewportState );
    virtual ~CNullCamRotate();

    virtual void MousePress() override;
    virtual void MouseMove() override;
    virtual void MouseRelease() override;
    virtual void MouseClick() override;
    virtual void MouseDoubleClick() override;
    virtual void MouseWheel() override;
};

class CNullCamZoom : public CViewportOperatorAbstract
{
public:
    CNullCamZoom( EViewportState eViewportState );
    virtual ~CNullCamZoom();

    virtual void MousePress() override;
    virtual void MouseMove() override;
    virtual void MouseRelease() override;
    virtual void MouseClick() override;
    virtual void MouseDoubleClick() override;
    virtual void MouseWheel() override;
};