/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol GEOVoltaireMultiTileDownloaderDelegate
- (void)tileDownload:(id)arg1 didFailWithError:(id)arg2;
- (void)tileDownloadFinished:(id)arg1;
- (void)tileDownload:(id)arg1 didReceiveData:(id)arg2 edition:(unsigned int)arg3 forKey:(struct _GEOTileKey)arg4;
@end
