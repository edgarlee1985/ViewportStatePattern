#pragma once

#include "ViewportStateDef.h"
#include "ViewportOperatorAbstract.h"

#include <QPoint>

class CMouseData
{
public:
    CMouseData();
    ~CMouseData();

public:
    bool bMousePress;
    QPoint kMousePressPos;
    QPoint kMouseMoveLastPos;
};

class CViewportStateAbstract
{
public:
    CViewportStateAbstract( const CMouseData& kMouseData );
    virtual ~CViewportStateAbstract();

    virtual void SetViewportOperator( EViewportOperator eOperator ) = 0;

    void MousePress();
    void MouseMove();
    void MouseRelease();
    void MouseClick();
    void MouseDoubleClick();
    void MouseWheel();

protected:
    const CMouseData& m_kMouseData;

    CViewportOperatorAbstract* m_pActiveOperator;
};

class CNoneEditState : public CViewportStateAbstract
{
public:
    CNoneEditState( const CMouseData& kMouseData );
    ~CNoneEditState();

    virtual void SetViewportOperator( EViewportOperator eOperator ) override;

protected:
    CNullSelect m_kNullSelect;
    CNullMove m_kNullMove;
    CNullRotate m_kNullRotate;
    CNullScale m_kNullScale;

    CNullCamMove m_kNullCameMove;
    CNullCamRotate m_kNullCameRotate;
    CNullCamZoom m_kNullCameZoom;
};