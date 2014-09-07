#include "ViewportOperatorAbstract.h"

CViewportOperatorAbstract::CViewportOperatorAbstract( EViewportState eViewportState )
: m_eViewportState( eViewportState )
{

}

CViewportOperatorAbstract::~CViewportOperatorAbstract()
{

}

CNullSelect::CNullSelect( EViewportState eViewportState )
: CViewportOperatorAbstract( eViewportState )
{

}

CNullSelect::~CNullSelect()
{

}

void CNullSelect::MousePress()
{
    // do noting.
}

void CNullSelect::MouseMove()
{
    // do noting.
}

void CNullSelect::MouseRelease()
{
    // do noting.
}

void CNullSelect::MouseClick()
{
    // do noting.
}

void CNullSelect::MouseDoubleClick()
{
    // do noting.
}

void CNullSelect::MouseWheel()
{
    // do noting.
}

CNullMove::CNullMove( EViewportState eViewportState )
: CViewportOperatorAbstract( eViewportState )
{

}

CNullMove::~CNullMove()
{

}

void CNullMove::MousePress()
{
    // do noting.
}

void CNullMove::MouseMove()
{
    // do noting.
}

void CNullMove::MouseRelease()
{
    // do noting.
}

void CNullMove::MouseClick()
{
    // do noting.
}

void CNullMove::MouseDoubleClick()
{
    // do noting.
}

void CNullMove::MouseWheel()
{
    // do noting.
}

CNullRotate::CNullRotate( EViewportState eViewportState )
: CViewportOperatorAbstract( eViewportState )
{

}

CNullRotate::~CNullRotate()
{

}

void CNullRotate::MousePress()
{
    // do noting.
}

void CNullRotate::MouseMove()
{
    // do noting.
}

void CNullRotate::MouseRelease()
{
    // do noting.
}

void CNullRotate::MouseClick()
{
    // do noting.
}

void CNullRotate::MouseDoubleClick()
{
    // do noting.
}

void CNullRotate::MouseWheel()
{
    // do noting.
}

CNullScale::CNullScale( EViewportState eViewportState )
: CViewportOperatorAbstract( eViewportState )
{

}

CNullScale::~CNullScale()
{

}

void CNullScale::MousePress()
{
    // do noting.
}

void CNullScale::MouseMove()
{
    // do noting.
}

void CNullScale::MouseRelease()
{
    // do noting.
}

void CNullScale::MouseClick()
{
    // do noting.
}

void CNullScale::MouseDoubleClick()
{
    // do noting.
}

void CNullScale::MouseWheel()
{
    // do noting.
}

CNullCamMove::CNullCamMove( EViewportState eViewportState )
: CViewportOperatorAbstract( eViewportState )
{

}

CNullCamMove::~CNullCamMove()
{

}

void CNullCamMove::MousePress()
{
    // do noting.
}

void CNullCamMove::MouseMove()
{
    // do noting.
}

void CNullCamMove::MouseRelease()
{
    // do noting.
}

void CNullCamMove::MouseClick()
{
    // do noting.
}

void CNullCamMove::MouseDoubleClick()
{
    // do noting.
}

void CNullCamMove::MouseWheel()
{
    // do noting.
}

CNullCamRotate::CNullCamRotate( EViewportState eViewportState )
: CViewportOperatorAbstract( eViewportState )
{

}

CNullCamRotate::~CNullCamRotate()
{

}

void CNullCamRotate::MousePress()
{
    // do noting.
}

void CNullCamRotate::MouseMove()
{
    // do noting.
}

void CNullCamRotate::MouseRelease()
{
    // do noting.
}

void CNullCamRotate::MouseClick()
{
    // do noting.
}

void CNullCamRotate::MouseDoubleClick()
{
    // do noting.
}

void CNullCamRotate::MouseWheel()
{
    // do noting.
}

CNullCamZoom::CNullCamZoom( EViewportState eViewportState )
: CViewportOperatorAbstract( eViewportState )
{

}

CNullCamZoom::~CNullCamZoom()
{

}

void CNullCamZoom::MousePress()
{
    // do noting.
}

void CNullCamZoom::MouseMove()
{
    // do noting.
}

void CNullCamZoom::MouseRelease()
{
    // do noting.
}

void CNullCamZoom::MouseClick()
{
    // do noting.
}

void CNullCamZoom::MouseDoubleClick()
{
    // do noting.
}

void CNullCamZoom::MouseWheel()
{
    // do noting.
}