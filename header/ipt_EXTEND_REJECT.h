#ifndef _IPT_EXTEND_REJECT_H
#define _IPT_EXTEND_REJECT_H

enum ipt_ex_reject_with {
	IPT_EXTEND_ICMP_NET_UNREACHABLE,
	IPT_EXTEND_ICMP_HOST_UNREACHABLE,
	IPT_EXTEND_ICMP_PROT_UNREACHABLE,
	IPT_EXTEND_ICMP_PORT_UNREACHABLE,
	IPT_EXTEND_ICMP_ECHOREPLY,
	IPT_EXTEND_ICMP_NET_PROHIBITED,
	IPT_EXTEND_ICMP_HOST_PROHIBITED,
	IPT_EXTEND_TCP_RESET,
	IPT_EXTEND_ICMP_ADMIN_PROHIBITED,
	IPT_EXTEND_HTTP_SITE_PROHIBITED,
	IPT_EXTEND_TRAFFIC_LIMIT
};

struct ipt_ex_reject_info {
	enum ipt_ex_reject_with with;      /* reject type */
};

#ifndef ARRAY_SIZE
#define ARRAY_SIZE(x) (sizeof(x) / sizeof((x)[0]))
#endif

#endif /*_IPT_EXTEND_REJECT_H*/
