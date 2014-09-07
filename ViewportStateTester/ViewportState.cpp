#include "ViewportState.h"

CObjectEditState::CObjectEditState( const CMouseData& kMouseData )
: CViewportStateAbstract( kMouseData )
, m_kObjectSelect( OBJECT_EDIT )
, m_kObjectMove( OBJECT_EDIT )
, m_kObjectRotate( OBJECT_EDIT )
, m_kObjectScale( OBJECT_EDIT )
, m_kCameMove( OBJECT_EDIT )
, m_kCameRotate( OBJECT_EDIT )
, m_kCameZoom( OBJECT_EDIT )
{
    m_pActiveOperator = &m_kObjectSelect;
}

CObjectEditState::~CObjectEditState()
{

}

void CObjectEditState::SetViewportOperator( EViewportOperator eOperator )
{
    switch ( eOperator )
    {
    case SELECT:
        m_pActiveOperator = &m_kObjectSelect;
        break;
    case MOVE:
        m_pActiveOperator = &m_kObjectMove;
        break;
    case ROTATE:
        m_pActiveOperator = &m_kObjectRotate;
        break;
    case SCALE:
        m_pActiveOperator = &m_kObjectScale;
        break;
    case CAMMOVE:
        m_pActiveOperator = &m_kCameMove;
        break;
    case CAMROTATE:
        m_pActiveOperator = &m_kCameRotate;
        break;
    case CAMZOOM:
        m_pActiveOperator = &m_kCameZoom;
        break;
    default:
        m_pActiveOperator = &m_kObjectSelect;
        break;
    }
}

CBoneEditState::CBoneEditState( const CMouseData& kMouseData )
: CViewportStateAbstract( kMouseData )
, m_kBoneSelect( BONE_EDIT )
, m_kBoneMove( BONE_EDIT )
, m_kBoneRotate( BONE_EDIT )
, m_kCameMove( BONE_EDIT )
, m_kCameRotate( BONE_EDIT )
, m_kCameZoom( BONE_EDIT )
{
    m_pActiveOperator = &m_kBoneSelect;
}

CBoneEditState::~CBoneEditState()
{

}

void CBoneEditState::SetViewportOperator( EViewportOperator eOperator )
{
    switch ( eOperator )
    {
    case SELECT:
        m_pActiveOperator = &m_kBoneSelect;
    	break;
    case MOVE:
        m_pActiveOperator = &m_kBoneMove;
        break;
    case ROTATE:
        m_pActiveOperator = &m_kBoneRotate;
        break;
    case CAMMOVE:
        m_pActiveOperator = &m_kCameMove;
        break;
    case CAMROTATE:
        m_pActiveOperator = &m_kCameRotate;
        break;
    case CAMZOOM:
        m_pActiveOperator = &m_kCameZoom;
        break;
    default:
        m_pActiveOperator = &m_kBoneSelect;
        break;
    }
}

CPathEditState::CPathEditState( const CMouseData& kMouseData )
: CViewportStateAbstract( kMouseData )
, m_kPathSelect( PATH_EDIT )
, m_kPathMove( PATH_EDIT )
, m_kPathRotate( PATH_EDIT )
, m_kPathScale( PATH_EDIT )
, m_kCameMove( PATH_EDIT )
, m_kCameRotate( PATH_EDIT )
, m_kCameZoom( PATH_EDIT )
{
    m_pActiveOperator = &m_kPathSelect;
}

CPathEditState::~CPathEditState()
{

}

void CPathEditState::SetViewportOperator( EViewportOperator eOperator )
{
    switch ( eOperator )
    {
    case SELECT:
        m_pActiveOperator = &m_kPathSelect;
        break;
    case MOVE:
        m_pActiveOperator = &m_kPathMove;
        break;
    case ROTATE:
        m_pActiveOperator = &m_kPathRotate;
        break;
    case SCALE:
        m_pActiveOperator = &m_kPathScale;
        break;
    case CAMMOVE:
        m_pActiveOperator = &m_kCameMove;
        break;
    case CAMROTATE:
        m_pActiveOperator = &m_kCameRotate;
        break;
    case CAMZOOM:
        m_pActiveOperator = &m_kCameZoom;
        break;
    default:
        m_pActiveOperator = &m_kPathSelect;
        break;
    }
}
