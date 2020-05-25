using namespace ns3;

uint16_t MAX_START_TIME_DELAY = 10; // seconds

AsciiTraceHelper traceHelper;
Ptr<OutputStreamWrapper> mobStream = traceHelper.CreateFileStream ("mobility_trace.txt");
Ptr<OutputStreamWrapper> parmStream = traceHelper.CreateFileStream ("parameter_settings.txt");
Ptr<OutputStreamWrapper> rsrpRsrqStream = traceHelper.CreateFileStream ("rsrp_rsrq.txt");
Ptr<OutputStreamWrapper> dashClientStream = traceHelper.CreateFileStream ("dash_client.txt");

/*
void
Lte_RlcBufferSize (Ptr<OutputStreamWrapper> stream,
          string context,
          uint16_t rnti,
          uint8_t lcid,
          uint32_t txQueueSize,
          uint32_t retxQueueSize)
{
  cout << context << endl;
 *stream->GetStream() << Simulator::Now ().GetMicroSeconds () 
    << " " << context 
    << " " << rnti 
    << " " << (uint16_t)lcid 
    << " " << txQueueSize 
    << " " << retxQueueSize << endl;
}
*/