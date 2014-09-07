#include "ViewportStateAbstract.h"
#include "ViewportOperator.h"

CMouseData::CMouseData()
: bMousePress( false )
{

}

CMouseData::~CMouseData()
{

}

CViewportStateAbstract::CViewportStateAbstract( const CMouseData& kMouseData )
: m_kMouseData( kMouseData )
, m_pActiveOperator( nullptr )
{

}

CViewportStateAbstract::~CViewportStateAbstract()
{

}

void CViewportStateAbstract::MousePress()
{
    m_pActiveOperator->MousePress();
}

void CViewportStateAbstract::MouseMove()
{
    m_pActiveOperator->MouseMove();
}

void CViewportStateAbstract::MouseRelease()
{
    m_pActiveOperator->MouseRelease();
}

void CViewportStateAbstract::MouseClick()
{
    m_pActiveOperator->MouseClick();
}

void CViewportStateAbstract::MouseDoubleClick()
{
    m_pActiveOperator->MouseDoubleClick();
}

void CViewportStateAbstract::MouseWheel()
{
    m_pActiveOperator->MouseWheel();
}

CNoneEditState::CNoneEditState( const CMouseData& kMouseData )
: CViewportStateAbstract( kMouseData )
, m_kNullSelect( NONE_EDIT )
, m_kNullMove( NONE_EDIT )
, m_kNullRotate( NONE_EDIT )
, m_kNullScale( NONE_EDIT )
, m_kNullCameMove( NONE_EDIT )
, m_kNullCameRotate( NONE_EDIT )
, m_kNullCameZoom( NONE_EDIT )
{
    m_pActiveOperator = &m_kNullSelect;
}

CNoneEditState::~CNoneEditState()
{
}

void CNoneEditState::SetViewportOperator( EViewportOperator eOperator )
{
    switch ( eOperator )
    {
    case SELECT:
        m_pActiveOperator = &m_kNullSelect;
        break;
    case MOVE:
        m_pActiveOperator = &m_kNullMove;
        break;
    case ROTATE:
        m_pActiveOperator = &m_kNullRotate;
        break;
    case SCALE:
        m_pActiveOperator = &m_kNullScale;
        break;
    case CAMMOVE:
        m_pActiveOperator = &m_kNullCameMove;
        break;
    case CAMROTATE:
        m_pActiveOperator = &m_kNullCameRotate;
        break;
    case CAMZOOM:
        m_pActiveOperator = &m_kNullCameZoom;
        break;
    default:
        m_pActiveOperator = &m_kNullSelect;
        break;
    }
}