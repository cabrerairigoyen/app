#include "pi_stream_controller.h"

namespace PiStream {

PiStreamController::PiStreamController(Responder * parentResponder) :
  ViewController(parentResponder)
{
}

View * PiStreamController::view() {
  return &m_view;
}

bool PiStreamController::handleEvent(Ion::Events::Event event) {
  if (event == Ion::Events::Back) {
    return false;
  }
  return true;
}

void PiStreamController::didBecomeFirstResponder() {
  // Called when the controller becomes active
}

void PiStreamController::PiStreamView::drawRect(KDContext * ctx, KDRect rect) const {
  ctx->fillRect(rect, KDColorWhite);
  ctx->drawString("Pi Stream Display", KDPoint(10, 10), KDFont::LargeFont, KDColorBlack, KDColorWhite);
  ctx->drawString("Raspberry Pi Streaming", KDPoint(10, 40), KDFont::SmallFont, KDColorBlack, KDColorWhite);
  ctx->drawString("Ready for data...", KDPoint(10, 70), KDFont::SmallFont, KDColorBlack, KDColorWhite);
}

}