#include "xwidgets/ximage.hpp"

namespace xw
{
#if defined(_MSC_VER) && (_MSC_VER==1910 || _MSC_VER==1911 || _MSC_VER==1912 || _MSC_VER==1913)
    template class xmaterialize<ximage>;
    template class xtransport<xmaterialize<ximage>>;
#else
    template class XWIDGETS_API xmaterialize<ximage>;
    template class XWIDGETS_API xtransport<xmaterialize<ximage>>;
#endif
}
