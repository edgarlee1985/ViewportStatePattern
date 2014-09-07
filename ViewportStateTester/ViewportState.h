#pragma once

#include "ViewportStateAbstract.h"
#include "ViewportOperator.h"

class CObjectEditState : public CViewportStateAbstract
{
public:
    CObjectEditState( const CMouseData& kMouseData );
    ~CObjectEditState();

    virtual void SetViewportOperator( EViewportOperator eOperator ) override;

protected:
    CObjectSelect m_kObjectSelect;
    CObjectMove m_kObjectMove;
    CObjectRotate m_kObjectRotate;
    CObjectScale m_kObjectScale;

    CCamMove m_kCameMove;
    CCamRotate m_kCameRotate;
    CCamZoom m_kCameZoom;
};

class CBoneEditState : public CViewportStateAbstract
{
public:
    CBoneEditState( const CMouseData& kMouseData );
    ~CBoneEditState();

    virtual void SetViewportOperator( EViewportOperator eOperator ) override;

protected:
    CBoneSelect m_kBoneSelect;
    CBoneMove m_kBoneMove;
    CBoneRotate m_kBoneRotate;

    CCamMove m_kCameMove;
    CCamRotate m_kCameRotate;
    CCamZoom m_kCameZoom;
};

class CPathEditState : public CViewportStateAbstract
{
public:
    CPathEditState( const CMouseData& kMouseData );
    ~CPathEditState();

    virtual void SetViewportOperator( EViewportOperator eOperator ) override;

protected:
    CPathSelect m_kPathSelect;
    CPathMove m_kPathMove;
    CPathRotate m_kPathRotate;
    CPathScale m_kPathScale;

    CCamMove m_kCameMove;
    CCamRotate m_kCameRotate;
    CCamZoom m_kCameZoom;
};